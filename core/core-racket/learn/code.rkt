#lang slideshow

(require slideshow/code)

(code ((code (colorize (class))) Shape:))

(define-syntax pict+code
  (syntax-rules ()
    [(pict+code expr)
     (hc-append 10
                expr
                (code expr))]))
 

(pict+code (circle 10))