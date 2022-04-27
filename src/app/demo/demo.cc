#include <iostream>
#include <vector>
#include <string>

// GLOG
#include "glog/logging.h"
#include "glog/stl_logging.h"

// absl
#include "absl/strings/str_join.h"

// Internal Dependencies
#include "src/includes/timer/timer.h"

int main(int argc, const char **argv)
{
    // intialize google logging
    google::InitGoogleLogging(argv[0]);

    std::vector<std::string> vec = {"foo", "bar", "baz"};
    absl::string_view s = absl::StrJoin(vec, "-");

    LOG(INFO) << "Str:: " << s << "\n";
    LOG_IF(ERROR, s.size() > 10) << "Something went wrong.\n";

    LOG_IF(FATAL, !std::stoi(argv[1])) << "ERROR:: FIX THIS.";

    return 0;
}