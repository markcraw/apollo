/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/**
 * @file
 */

#ifndef MODEULES_PERCEPTION_TOOL_DATE_GENERATOR_DATA_GENERATOR_
#define MODEULES_PERCEPTION_TOOL_DATE_GENERATOR_DATA_GENERATOR_

#include <string>

#include "sensor_msgs/PointCloud2.h"

#include "modules/common/apollo_app.h"
#include "modules/common/macro.h"
#include "modules/perception/lib/pcl_util/pcl_types.h"
#include "ros/include/ros/ros.h"

/**
 * @namespace apollo::calibration
 * @brief apollo::calibration
 */
namespace apollo {
namespace perception {
namespace data_generator {

class DataGenerator : public apollo::common::ApolloApp {
 public:
  std::string Name() const override;
  apollo::common::Status Init() override;
  apollo::common::Status Start() override;
  void Stop() override;

 private:
  // Upon receiving point cloud data
  void OnPointCloud(const sensor_msgs::PointCloud2& message);
};

}  // namespace data_generator
}  // namespace perception
}  // namespace apollo

#endif  // MODEULES_PERCEPTION_TOOL_DATE_GENERATOR_DATA_GENERATOR_
