# Basic skeleton for a new project(bazel)

## 1. Have bazel installed or use the "anshal888/mediapipe_env:v4" docker image.

## 2. Start building the project

- BUILD
```bash
bazel build src/app:appname
```

- RUN
```bash
bazel-bin/src/app/appname
```
- BUILDNRUN
```bash
bazel run src/app:appname
```