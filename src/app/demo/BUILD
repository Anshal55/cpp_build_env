load("@rules_cc//cc:defs.bzl", "cc_binary")

# external dependencies can also be imported in (sub-folder includes/deps files)
cc_binary(
    name = "demo",
    srcs = ["demo.cc"],
    deps = ["//src/includes/timer:timer",
            "//src/includes/fibonacci:fibonacci_lib",
            "@com_github_gflags_gflags//:gflags",
            "@glog",
            "@com_google_absl//absl/strings",
            ],
)