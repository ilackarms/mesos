/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __SCHEDULER_PROTO_HPP__
#define __SCHEDULER_PROTO_HPP__

// ONLY USEFUL AFTER RUNNING PROTOC.
#include <mesos/scheduler/scheduler.pb.h>

namespace mesos {

inline std::ostream& operator<<(std::ostream& stream,
                                const scheduler::Call::Type& type)
{
  return stream << scheduler::Call_Type_Name(type);
}


inline std::ostream& operator<<(
    std::ostream& stream,
    const scheduler::Event::Type& type)
{
  return stream << scheduler::Event_Type_Name(type);
}

} // namespace mesos {

#endif // __SCHEDULER_PROTO_HPP__
