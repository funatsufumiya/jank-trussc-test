(defproject jank-trussc-test "0.1-SNAPSHOT"
  :license {:name "MIT"
            :url "https://mit-license.org/"}
  :dependencies []
  :plugins [[org.jank-lang/lein-jank "0.6"]]
  :middleware [leiningen.jank/middleware]
  :jank {:include-dirs ["include"]
         :library-dirs ["lib"]
         :linked-libraries ["TrussC"]}
  :main jank-trussc-test.main
  :profiles {:base {:jank {:output-dir "target/debug"
                           :optimization-level 0}}
             :release {:jank {:output-dir "target/release"
                              :optimization-level 2}}})
