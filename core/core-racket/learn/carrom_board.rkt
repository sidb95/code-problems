#lang slideshow

(require racket/draw)

(define target (make-bitmap 30 30)) ; A 30x30 bitmap
(define dc (new bitmap-dc% [bitmap target]))

; board
(send dc set-brush "gold" 'solid)
(send dc set-pen "black" 1 'solid)
(send dc draw-rectangle
      0 0   ; Top-left at (0, 10), 10 pixels down from top-left
      30 30) ; 30 pixels wide and 10 pixels high
(send dc draw-line
      3 3
      27 3)
(send dc draw-line
      3 3
      3 27)
(send dc draw-line
      3 27
      27 27)
(send dc draw-line
      27 3
      27 27)
; circles
(send dc set-brush "brown" 'solid)
(send dc draw-ellipse 0 0 3 3)
(send dc draw-ellipse 0 27 3 3)
(send dc draw-ellipse 27 0 3 3)
(send dc draw-ellipse 27 27 3 3)
(send dc set-brush "red" 'solid)
(send dc draw-ellipse 2 2 2 2)
(send dc draw-ellipse 28 2 2 2)
(send dc draw-ellipse 2 28 2 2)
(send dc draw-ellipse 28 28 2 2)
; lines
(send dc set-pen "black" 0.5 'solid)
( send dc draw-line
       15 9
       15 15)

( send dc draw-line
       15 21
       15 15)

( send dc draw-line
       21 15
       15 15)

( send dc draw-line
       9 15
       15 15)
( send dc draw-line
       17 9
       15 15)

( send dc draw-line
       17 21
       15 15)

( send dc draw-line
       21 17
       15 15)

( send dc draw-line
       9 17
       15 15)
; center
(send dc draw-ellipse 14 14 3 3)

; save in file
(send target save-file "box.png" 'png)
