#lang slideshow

; circle is a procedure

(define circ (circle 10))
(define sq (colorize (filled-rectangle 25 25) "orange"))
(vc-append (hc-append 10 circ circ) (vc-append sq (hc-append 10 circ circ)))
