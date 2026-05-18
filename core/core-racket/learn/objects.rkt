#lang slideshow

(require racket/class
         racket/gui/base)
(define f (new frame% [label "My Art"]
                      [width 300]
                      [height 300]
                      [alignment '(center center)]))
 
; #t is the boolean variable true
(send f show #t)
