load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "data_generator_lib",
    srcs = ["data_generator.cc"],
    hdrs = ["data_generator.h"],
    copts = [
        "-Wno-deprecated",
    ],
    deps = [
        "//modules/common:apollo_app",
        "//modules/common/adapters:adapter_manager",
        "//modules/common:log",
        "//modules/common/vehicle_state:vehicle_state_provider",
        "//modules/perception/lib/pcl_util",
    ],
)

cc_binary(
    name = "data_generator",
    srcs = ["main.cc"],
    deps = [
        ":data_generator_lib",
        "//external:gflags",
        "//modules/common:log",
        "@ros//:ros_common",
    ],
)

cpplint()
