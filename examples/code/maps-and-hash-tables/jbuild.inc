(jbuild_version 1)

(alias ((name sexp) (deps (comparable.ml.sexp))))

(rule (
  (targets (comparable.ml.sexp))
  (deps    (comparable.ml))
  (fallback)
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

(alias ((name sexp) (deps (jbuild.sexp))))

(rule (
  (targets (jbuild.sexp))
  (deps    (jbuild))
  (fallback)
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

(alias ((name sexp) (deps (phys_equal.rawscript.sexp))))

(rule (
  (targets (phys_equal.rawscript.sexp))
  (deps    (phys_equal.rawscript))
  (fallback)
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

(alias ((name code) (deps (core_phys_equal.topscript.stamp))))

(alias ((name sexp) (deps (core_phys_equal.topscript.sexp))))

(rule (
  (targets (core_phys_equal.topscript.sexp))
  (deps    (core_phys_equal.topscript))
  (action (
    with-stdout-to ${@} (
      run ocaml-topexpect -dry-run -sexp -short-paths -verbose ${<})))))

(rule (
  (targets (core_phys_equal.topscript.stamp))
  (deps    (core_phys_equal.topscript))
  (action (
    progn
    (setenv OCAMLRUNPARAM "" (run ocaml-topexpect -short-paths -verbose ${<}))
    (write-file ${@} "")
    (diff? core_phys_equal.topscript core_phys_equal.topscript.corrected)))))

(alias ((name code) (deps (main.topscript.stamp))))

(alias ((name sexp) (deps (main.topscript.sexp))))

(rule (
  (targets (main.topscript.sexp))
  (deps    (main.topscript))
  (action (
    with-stdout-to ${@} (
      run ocaml-topexpect -dry-run -sexp -short-paths -verbose ${<})))))

(rule (
  (targets (main.topscript.stamp))
  (deps    (main.topscript))
  (action (
    progn
    (setenv OCAMLRUNPARAM "" (run ocaml-topexpect -short-paths -verbose ${<}))
    (write-file ${@}           "")
    (diff?      main.topscript main.topscript.corrected)))))

