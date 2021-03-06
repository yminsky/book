(jbuild_version 1)

(alias ((name code) (deps (polymorphism.topscript.stamp))))

(alias ((name sexp) (deps (polymorphism.topscript.sexp))))

(rule (
  (targets (polymorphism.topscript.sexp))
  (deps    (polymorphism.topscript))
  (action (
    with-stdout-to ${@} (
      run ocaml-topexpect -dry-run -sexp -short-paths -verbose ${<})))))

(rule (
  (targets (polymorphism.topscript.stamp))
  (deps    (polymorphism.topscript))
  (action (
    progn
    (setenv OCAMLRUNPARAM "" (run ocaml-topexpect -short-paths -verbose ${<}))
    (write-file ${@} "")
    (diff? polymorphism.topscript polymorphism.topscript.corrected)))))

(alias ((name sexp) (deps (subtyping.ml.sexp))))

(rule (
  (targets (subtyping.ml.sexp))
  (deps    (subtyping.ml))
  (fallback)
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

(alias ((name sexp) (deps (jbuild.sexp))))

(rule (
  (targets (jbuild.sexp))
  (deps    (jbuild))
  (fallback)
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

(alias ((name sexp) (deps (is_barbell.ml.sexp))))

(rule (
  (targets (is_barbell.ml.sexp))
  (deps    (is_barbell.ml))
  (fallback)
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

(alias ((name code) (deps (stack.topscript.stamp))))

(alias ((name sexp) (deps (stack.topscript.sexp))))

(rule (
  (targets (stack.topscript.sexp))
  (deps    (stack.topscript))
  (action (
    with-stdout-to ${@} (
      run ocaml-topexpect -dry-run -sexp -short-paths -verbose ${<})))))

(rule (
  (targets (stack.topscript.stamp))
  (deps    (stack.topscript))
  (action (
    progn
    (setenv OCAMLRUNPARAM "" (run ocaml-topexpect -short-paths -verbose ${<}))
    (write-file ${@}            "")
    (diff?      stack.topscript stack.topscript.corrected)))))

(alias ((name sexp) (deps (narrowing.ml.sexp))))

(rule (
  (targets (narrowing.ml.sexp))
  (deps    (narrowing.ml))
  (fallback)
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

(alias ((name code) (deps (subtyping.topscript.stamp))))

(alias ((name sexp) (deps (subtyping.topscript.sexp))))

(rule (
  (targets (subtyping.topscript.sexp))
  (deps    (subtyping.topscript))
  (action (
    with-stdout-to ${@} (
      run ocaml-topexpect -dry-run -sexp -short-paths -verbose ${<})))))

(rule (
  (targets (subtyping.topscript.stamp))
  (deps    (subtyping.topscript))
  (action (
    progn
    (setenv OCAMLRUNPARAM "" (run ocaml-topexpect -short-paths -verbose ${<}))
    (write-file ${@} "")
    (diff? subtyping.topscript subtyping.topscript.corrected)))))

(alias ((name code) (deps (immutable.topscript.stamp))))

(alias ((name sexp) (deps (immutable.topscript.sexp))))

(rule (
  (targets (immutable.topscript.sexp))
  (deps    (immutable.topscript))
  (action (
    with-stdout-to ${@} (
      run ocaml-topexpect -dry-run -sexp -short-paths -verbose ${<})))))

(rule (
  (targets (immutable.topscript.stamp))
  (deps    (immutable.topscript))
  (action (
    progn
    (setenv OCAMLRUNPARAM "" (run ocaml-topexpect -short-paths -verbose ${<}))
    (write-file ${@} "")
    (diff? immutable.topscript immutable.topscript.corrected)))))

(alias ((name sexp) (deps (IsBarbell.java.sexp))))

(rule (
  (targets (IsBarbell.java.sexp))
  (deps    (IsBarbell.java))
  (fallback)
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

(alias ((name code) (deps (row_polymorphism.topscript.stamp))))

(alias ((name sexp) (deps (row_polymorphism.topscript.sexp))))

(rule (
  (targets (row_polymorphism.topscript.sexp))
  (deps    (row_polymorphism.topscript))
  (action (
    with-stdout-to ${@} (
      run ocaml-topexpect -dry-run -sexp -short-paths -verbose ${<})))))

(rule (
  (targets (row_polymorphism.topscript.stamp))
  (deps    (row_polymorphism.topscript))
  (action (
    progn
    (setenv OCAMLRUNPARAM "" (run ocaml-topexpect -short-paths -verbose ${<}))
    (write-file ${@} "")
    (diff? row_polymorphism.topscript row_polymorphism.topscript.corrected)))))

(alias ((name sexp) (deps (Shape.java.sexp))))

(rule (
  (targets (Shape.java.sexp))
  (deps    (Shape.java))
  (fallback)
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

