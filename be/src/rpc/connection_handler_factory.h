// Copyright (c) 2017, Baidu.com, Inc. All Rights Reserved

// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#ifndef BDG_PALO_BE_SRC_RPC_CONNECTION_HANDLER_FACTORY_H
#define BDG_PALO_BE_SRC_RPC_CONNECTION_HANDLER_FACTORY_H

#include "dispatch_handler.h"

namespace palo {
/** Abstract class for creating default application dispatch handlers.
 */
class ConnectionHandlerFactory {
public:
    /** Destructor */
    virtual ~ConnectionHandlerFactory() { }

    /** Creates a connection dispatch handler.
     * @param dhp Reference to created dispatch handler
     */
    virtual void get_instance(DispatchHandlerPtr &dhp) = 0;

};
/// Smart pointer to ConnectionHandlerFactory
typedef std::shared_ptr<ConnectionHandlerFactory> ConnectionHandlerFactoryPtr;

} //namespace palo

#endif //BDG_PALO_BE_SRC_RPC_CONNECTION_HANDLER_FACTORY_H
