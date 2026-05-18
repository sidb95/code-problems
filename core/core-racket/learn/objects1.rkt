#lang slideshow

(require racket/class
         racket/gui/base)

(define-syntax pict+code
  (syntax-rules ()
    [(pict+code expr)
     (hc-append 10
                expr
                (code expr))]))

(define (add-drawing p)
  (let ([drawer (make-pict-drawer p)])
    (new canvas% [parent f]
                 [style '(border)]
                 [paint-callback (lambda (self dc)
                                   (drawer dc 0 0))])))
 

(add-drawing (pict+code (circle 10)))
#(struct:object:canvas% ...)

(add-drawing (colorize (filled-flash 50 30) "yellow"))
#(struct:object:canvas% ...)
