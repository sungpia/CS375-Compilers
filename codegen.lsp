; codegen.lsp       Gordon S. Novak Jr.      27 Nov 00

; simplified code gen for expressions
; (genarith '(* (+ a b) 3))

(defun op  (x) (car x))
(defun lhs (x) (cadr x))
(defun rhs (x) (caddr x))

(defvar registers)
(setq registers '(r1 r2 r3 r4 r5))

(defun getreg () (pop registers))

(defun genarith (x)
  (if (atom x)              ; if leaf,
      (genload x (getreg))  ;   load
      (genop (op x)         ; else op
             (genarith (lhs x))
             (genarith (rhs x))) ) )

(defun genop (op ra rb)
  (format t "   ~A   ~D,~D~%"
    (cadr (assoc op '((+ add) (* mul) (/ div) (- sub))))
    ra rb)
  rb)

(defun genload (x r)
  (format t "   LOAD  ~A,~D~%" x r)
  r)
