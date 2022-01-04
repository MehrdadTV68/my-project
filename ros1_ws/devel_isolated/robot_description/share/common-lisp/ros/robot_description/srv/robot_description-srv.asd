
(cl:in-package :asdf)

(defsystem "robot_description-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "BugService" :depends-on ("_package_BugService"))
    (:file "_package_BugService" :depends-on ("_package"))
  ))