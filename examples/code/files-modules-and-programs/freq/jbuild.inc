(jbuild_version 1)

(alias ((name sexp) (deps (simple_build.sh.sexp))))

(rule (
  (targets (simple_build.sh.sexp))
  (deps    (simple_build.sh))
  (fallback)
  (action (setenv TERM dumb (with-stdout-to ${@} (run rwo-build eval ${<}))))))

(alias ((name sexp) (deps (jbuild.sexp))))

(rule (
  (targets (jbuild.sexp))
  (deps    (jbuild))
  (fallback)
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

(alias ((name sexp) (deps (simple_build_fail.errsh.sexp))))

(rule (
  (targets (simple_build_fail.errsh.sexp))
  (deps    (simple_build_fail.errsh))
  (fallback)
  (action (setenv TERM dumb (with-stdout-to ${@} (run rwo-build eval ${<}))))))

(alias ((name sexp) (deps (freq.ml.sexp))))

(rule (
  (targets (freq.ml.sexp))
  (deps    (freq.ml))
  (fallback)
  (action (with-stdout-to ${@} (run rwo-build eval ${<})))))

