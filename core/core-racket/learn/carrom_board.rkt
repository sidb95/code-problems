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
      5 5
      23 5)
(send dc draw-line
      5 5
      5 23)
(send dc draw-line
      5 23
      23 23)
(send dc draw-line
      23 5
      23 23)
; circles
(send dc set-brush "brown" 'solid)
(send dc set-pen "black" 1 'solid)
(send dc draw-ellipse 0 0 7 7)
(send dc draw-ellipse 0 23 7 7)
(send dc draw-ellipse 23 0 7 7)
(send dc draw-ellipse 23 23 7 7)
(send dc set-brush "red" 'solid)
(send dc draw-ellipse 5 5 5 5)
(send dc draw-ellipse 20 5 5 5)
(send dc draw-ellipse 5 20 5 5)
(send dc draw-ellipse 20 20 5 5)
; lines
(send dc set-pen "black" 0.01 'solid)
(send dc draw-line
      11 15
      19 15)
(send dc draw-line
      15 11
      15 19)
(send dc draw-line
      12 12
      18 18)
(send dc draw-line
      12 18
      18 12)
; center
(send dc draw-ellipse 13 13 5 5)

; save in file
(send target save-file "box.png" 'png)
