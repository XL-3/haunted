;; Scaled Sprites
SPRITE_SIZE                     EQU     32*32
Sprite_Base                     LABEL   BYTE
Sprite_BlackSquare              DB      SPRITE_SIZE dup(0) ;Sprite number 0
Sprite_BlueSquare               DB      SPRITE_SIZE dup(1) ;Sprite number 1
Sprite_RedSquare                DB      SPRITE_SIZE dup(4) ;Sprite number 2, etc..
Sprite_WhiteSquare              DB      SPRITE_SIZE dup(15)
Sprite_GreenSquare              DB      SPRITE_SIZE dup(47)
Sprite_OrangeSquare             DB      SPRITE_SIZE dup(43)

Sprite_Ghost0                   DB      0,  0,  0,  0,  0,  0,  0,  0,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0   
                                DB      0,  0,  0,  0,  0,  0,  0,  0,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0   
                                DB      0,  0,  0,  0,  0,  0,  2,  2,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2,  2,  2,  0,  0,  0,  0,  0,  0,  0,  0   
                                DB      0,  0,  0,  0,  0,  0,  2,  2,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2,  2,  2,  0,  0,  0,  0,  0,  0,  0,  0   
                                DB      0,  0,  0,  0,  2,  2,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2,  0,  0,  0,  0,  0,  0   
                                DB      0,  0,  0,  0,  2,  2,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2,  0,  0,  0,  0,  0,  0   
                                DB      0,  0,  2,  2,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2,  2,  2,  15, 15, 15, 15, 2,  2,  0,  0,  0,  0   
                                DB      0,  0,  2,  2,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2,  2,  2,  15, 15, 15, 15, 2,  2,  0,  0,  0,  0   
                                DB      0,  0,  2,  2,  15, 15, 2,  2,  15, 15, 2,  2,  15, 15, 15, 15, 2,  2,  15, 15, 15, 15, 2,  2,  15, 15, 2,  2,  0,  0,  0,  0   
                                DB      0,  0,  2,  2,  15, 15, 2,  2,  15, 15, 2,  2,  15, 15, 15, 15, 2,  2,  15, 15, 15, 15, 2,  2,  15, 15, 2,  2,  0,  0,  0,  0   
                                DB      2,  2,  15, 15, 15, 15, 2,  2,  15, 15, 2,  2,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2,  15, 15, 15, 15, 2,  2,  0,  0   
                                DB      2,  2,  15, 15, 15, 15, 2,  2,  15, 15, 2,  2,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2,  15, 15, 15, 15, 2,  2,  0,  0   
                                DB      2,  2,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2,  15, 15, 15, 15, 15, 15, 2,  2,  0,  0   
                                DB      2,  2,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2,  15, 15, 15, 15, 15, 15, 2,  2,  0,  0   
                                DB      2,  2,  15, 15, 6,  6,  15, 15, 6,  6,  15, 15, 6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2,  0,  0   
                                DB      2,  2,  15, 15, 6,  6,  15, 15, 6,  6,  15, 15, 6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2,  0,  0   
                                DB      2,  2,  15, 15, 6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2   
                                DB      2,  2,  15, 15, 6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2   
                                DB      2,  2,  15, 15, 6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2   
                                DB      2,  2,  15, 15, 6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2   
                                DB      0,  0,  2,  2,  15, 15, 6,  6,  15, 15, 6,  6,  15, 15, 6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2   
                                DB      0,  0,  2,  2,  15, 15, 6,  6,  15, 15, 6,  6,  15, 15, 6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2   
                                DB      0,  0,  2,  2,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2,  0,  0   
                                DB      0,  0,  2,  2,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2,  0,  0   
                                DB      0,  0,  0,  0,  2,  2,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2,  2,  2,  0,  0,  0,  0   
                                DB      0,  0,  0,  0,  2,  2,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2,  2,  2,  2,  0,  0,  0,  0   
                                DB      0,  0,  0,  0,  0,  0,  2,  2,  2,  2,  2,  2,  15, 15, 15, 15, 15, 15, 15, 15, 2,  2,  2,  2,  0,  0,  0,  0,  0,  0,  0,  0   
                                DB      0,  0,  0,  0,  0,  0,  2,  2,  2,  2,  2,  2,  15, 15, 15, 15, 15, 15, 15, 15, 2,  2,  2,  2,  0,  0,  0,  0,  0,  0,  0,  0   
                                DB      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  2,  2,  2,  2,  2,  2,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0   
                                DB      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  2,  2,  2,  2,  2,  2,  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0   
                                DB      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 
                                DB      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 


Sprite_Ghost1                   DB      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  6,  6,  6,  6,  6,  6,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  6,  6,  6,  6,  6,  6,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  0,  0,  0,  0,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  0,  0,  0,  0,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  0,  0,  0,  0,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  0,  0,  0,  0,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  0,  0,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  0,  0,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  0,  0,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  0,  0,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  0,  0,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  0,  0,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  0,  0,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  0,  0,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  6,  6,  15, 15, 6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 6,  6,  6,  6,  15, 15, 15, 15, 6,  6,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  6,  6,  15, 15, 6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 6,  6,  6,  6,  15, 15, 15, 15, 6,  6,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  6,  6,  6,  6,  6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 6,  6,  6,  6,  6,  6,  15, 15, 6,  6,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  6,  6,  6,  6,  6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 6,  6,  6,  6,  6,  6,  15, 15, 6,  6,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  6,  6,  6,  6,  6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 6,  6,  6,  6,  6,  6,  15, 15, 6,  6,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  6,  6,  6,  6,  6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 6,  6,  6,  6,  6,  6,  15, 15, 6,  6,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  6,  6,  15, 15, 6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  6,  6,  15, 15, 6,  6,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  6,  6,  15, 15, 6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  6,  6,  15, 15, 6,  6,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  0,  0,  0,  0
                                DB      0,  0,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  0,  0,  0,  0
                                DB      0,  0,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  0,  0,  0,  0
                                DB      0,  0,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  6,  6,  6,  6
                                DB      0,  0,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  6,  6,  6,  6
                                DB      0,  0,  6,  6,  6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  6,  6,  15, 15, 15, 15, 6,  6
                                DB      0,  0,  6,  6,  6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  6,  6,  15, 15, 15, 15, 6,  6
                                DB      0,  0,  0,  0,  0,  0,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 6,  6
                                DB      0,  0,  0,  0,  0,  0,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 6,  6
                                DB      0,  0,  0,  0,  0,  0,  6,  6,  6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  6,  6,  15, 15, 15, 15, 6,  6,  6,  6
                                DB      0,  0,  0,  0,  0,  0,  6,  6,  6,  6,  6,  6,  15, 15, 15, 15, 15, 15, 15, 15, 6,  6,  6,  6,  15, 15, 15, 15, 6,  6,  6,  6
                                DB      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  0,  0,  0,  0
                                DB      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  0,  0,  0,  0

