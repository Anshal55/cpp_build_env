load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "fibonacci",
    srcs = ["fib.cc"],
    deps = ["//src/includes/timer:timer",
            "//src/includes/fibonacci:fibonacci_lib",
            "@com_github_gflags_gflags//:gflags",
            "@glog",
            ],
)