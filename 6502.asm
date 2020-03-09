;+----------------------------------------------------------------+
;|                                                                |
;| +------------------------------------------------------------+ |
;| |                                                            | |
;| | 6502 micro-computer Main Board Led display message program | |
;| | ATMega version: V0.2                                       | |
;| | By SheaBae 2020 :P                                         | |
;| |                                                            | |
;| +------------------------------------------------------------+ |
;|                                                                |
;+----------------------------------------------------------------+
;
;This is the main assembly program that runs the 65C02 off EEPROM
;
;Version V0.2 - 2020
;


;Begin Initialization

;Begin General Mapping

PORTA = $6001    ;Port A output
PORTB = $6000    ;Port B input
DDRA = $6003     ;Data direction register A
DDRB = $6002     ;Data direction register B
OUTPUT = $FF     ;Output enabled on Port
INPUT = $FF      ;Input enabled on Port except zero
FILL = $0000     ;EEProm Filler

;End General Mapping

;Begin Char. set

;              -----------------
;+-------------|  LED Mapping  |------------+
;|             -----------------            |
;|                                          |
;+------------------------------------------+
;|--|  Port A  |--|  Port B  |--------------|
;+--|----------|--|----------|--------------+
;|  |          |  |          |              |
;|  | xxxxxx00 |  | 1xxxxxxx |  ==>  Led A  |
;|  | xxxxxx01 |  | 0xxxxxxx |  ==>  Led B  |
;|  | xxxxxx01 |  | 1xxxxxxx |  ==>  Led C  |
;|  | xxxxxx10 |  | 0xxxxxxx |  ==>  Led D  |
;|  | xxxxxx10 |  | 1xxxxxxx |  ==>  Led E  |
;|  | xxxxxx11 |  | 0xxxxxxx |  ==>  Led F  |
;|  |          |  |          |              |
;+------------------------------------------+

;Begin A

ZEROA = %00000000
ONEA = %01101100
TWOA = %01110000
THREEA = %01110100
FOURA = %01111000
FIVEA = %01111100
SIXA = %10000000
SEVENA = %10000100
EIGHTA = %10001000
NINEA = %10001100

AA = %00000100
BA = %00001000
CA = %00001100
DA = %00010000
EA = %00010100
FA = %00011000
GA = %00011100
HA = %00100000
IA = %00100100
JA = %00101000
KA = %00101100
LA = %00110000
MA = %00110100
NA = %00111000
OA = %00111100
PA = %01000000
QA = %01000100
RA = %01001000
SA = %01001100
TA = %01010000
UA = %01010100
VA = %01011000
WA = %01011100
XA = %01100000
YA = %01100100
ZA = %01101000

SLASHAA = %10010000
SLASHBA = %10010100
ARROWAA = %10011000
ARROWBA = %10011100
LEGAA = %10100000
LEGBA = %10100100
HEXYA = %10101000

;End A

;Begin B and C

ZEROB = %00000001
ONEB = %01101101
TWOB = %01110001
THREEB = %01110101
FOURB = %01111001
FIVEB = %01111101
SIXB = %10000001
SEVENB = %10000101
EIGHTB = %10001001
NINEB = %10001101

AB = %00000101
BB = %00001001
CB = %00001101
DB = %00010001
EB = %00010101
FB = %00011001
GB = %00011101
HB = %00100001
IB = %00100101
JB = %00101001
KB = %00101101
LB = %00110001
MB = %00110101
NB = %00111001
OB = %00111101
PB = %01000001
QB = %01000101
RB = %01001001
SB = %01001101
TB = %01010001
UB = %01010101
VB = %01011001
WB = %01011101
XB = %01100001
YB = %01100101
ZB = %01101001

SLASHAB = %10010001
SLASHBB = %10010101
ARROWAB = %10011001
ARROWBB = %10011101
LEGAB = %10100001
LEGBB = %10100101
HEXYB = %10101001

;End B and C

;Begin D and E

ZEROD = %00000010
ONED = %01101110
TWOD = %01110010
THREED = %01110110
FOURD = %01111010
FIVED = %01111110
SIXD = %10000010
SEVEND = %10000110
EIGHTD = %10001010
NINED = %10001110

AD = %00000110
BD = %00001010
CD = %00001110
DD = %00010010
ED = %00010110
FD = %00011010
GD = %00011110
HD = %00100010
ID = %00100110
JD = %00101010
KD = %00101110
LD = %00110010
MD = %00110110
ND = %00111010
OD = %00111110
PD = %01000010
QD = %01000110
RD = %01001010
SD = %01001110
TD = %01010010
UD = %01010110
VD = %01011010
WD = %01011110
XD = %01100010
YD = %01100110
ZD = %01101010

SLASHAD = %10010010
SLASHBD = %10010110
ARROWAD = %10011010
ARROWBD = %10011110
LEGAD = %10100010
LEGBD = %10100110
HEXYD = %10101010

;End D and E

;Begin F

ZEROF = %00000011
ONEF = %01101111
TWOF = %01110011
THREEF = %01110111
FOURF = %01111011
FIVEF = %01111111
SIXF = %10000011
SEVENF = %10000111
EIGHTF = %10001011
NINEF = %10001111

AF = %00000111
BF = %00001011
CF = %00001111
DF = %00010011
EF = %00010111
FF = %00011011
GF = %00011111
HF = %00100011
IF = %00100111
JF = %00101011
KF = %00101111
LF = %00110011
MF = %00110111
NF = %00111011
OF = %00111111
PF = %01000011
QF = %01000111
RF = %01001011
SF = %01001111
TF = %01010011
UF = %01010111
VF = %01011011
WF = %01011111
XF = %01100011
YF = %01100111
ZF = %01101011

SLASHAF = %10010011
SLASHBF = %10010111
ARROWAF = %10011011
ARROWBF = %10011111
LEGAF = %10100011
LEGBF = %10100111
HEXYF = %10101011

;End F

;End char set

;End Initialization

;Begin Cpu Initialization

	.ORG $8000

RESET:

	LDA #OUTPUT
	STA DDRA

	LDA #INPUT
	STA DDRB

;End Cpu Initialization

;Begin Main

LOOP:

;Program below will display SheaBB on the 
;onboard LED display

	LDA #SA
	STA PORTA

	LDA #%10000000
	STA PORTB

	LDA #HB
	STA PORTA

	LDA #%00000000
	STA PORTB

	LDA #EB
	STA PORTA

	LDA #%10000000
	STA PORTB

	LDA #AD
	STA PORTA

	LDA #%00000000
	STA PORTB

	LDA #BD
	STA #%10000000

	lda #BF
	STA #%00000000

	JMP LOOP

	.ORG $FFFC
	.WORD RESET
	.WORD FILL

;End Main
