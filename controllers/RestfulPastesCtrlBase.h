/**
 *
 *  RestfulPastesCtrlBase.h
 *  DO NOT EDIT. This file is generated by drogon_ctl automatically.
 *  Users should implement business logic in the derived class.
 */

#pragma once

#include <drogon/HttpController.h>
#include <drogon/orm/RestfulController.h>

#include "Pastes.h"
using namespace drogon;
using namespace drogon::orm;
using namespace drogon_model::pastebin;
/**
 * @brief this class is created by the drogon_ctl command.
 * this class is a restful API controller for reading and writing the pastes
 * table.
 */

class RestfulPastesCtrlBase : public RestfulController {
public:
  void getOne(const HttpRequestPtr &request,
              std::function<void(const HttpResponsePtr &)> &&callback,
              const std::string &code);
  void updateOne(const HttpRequestPtr &request,
                 std::function<void(const HttpResponsePtr &)> &&callback,
                 const std::string &token);
  void deleteOne(const HttpRequestPtr &request,
                 std::function<void(const HttpResponsePtr &)> &&callback,
                 const std::string &token);
  void create(const HttpRequestPtr &request,
              std::function<void(const HttpResponsePtr &)> &&callback);

  //  void update(const HttpRequestPtr &request,
  //              std::function<void(const HttpResponsePtr &)> &&callback);

  orm::DbClientPtr getDbClient() {
    return drogon::app().getDbClient(dbClientName_);
  }

protected:
  /// Ensure that subclasses inherited from this class are instantiated.
  RestfulPastesCtrlBase();
  const std::string dbClientName_{"default"};
};
