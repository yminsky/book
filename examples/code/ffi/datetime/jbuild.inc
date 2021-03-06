(jbuild_version 1)

(alias ((name sexp) (deps (jbuild.sexp))))

(rule (
  (targets (jbuild.sexp))
  (deps    (jbuild))
  (fallback)
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

(alias ((name sexp) (deps (datetime.ml.sexp))))

(rule (
  (targets (datetime.ml.sexp))
  (deps    (datetime.ml))
  (fallback)
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

(alias ((name sexp) (deps (build_datetime.sh.sexp))))

(rule (
  (targets (build_datetime.sh.sexp))
  (deps (build_datetime.sh datetime.ml jbuild jbuild.inc))
  (fallback)
  (action (setenv TERM dumb (with-stdout-to ${@} (run rwo-build eval ${<}))))))

