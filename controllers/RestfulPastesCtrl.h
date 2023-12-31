/**
 *
 *  RestfulPastesCtrl.h
 *  This file is generated by drogon_ctl
 *
 */

#pragma once

#include "RestfulPastesCtrlBase.h"
#include <drogon/HttpController.h>
#include <drogon/utils/FunctionTraits.h>

using namespace drogon;
/**
 * @brief this class is created by the drogon_ctl command.
 * this class is a restful API controller for reading and writing the pastes
 * table.
 */

class RestfulPastesCtrl : public drogon::HttpController<RestfulPastesCtrl>,
                          public RestfulPastesCtrlBase {
public:
  METHOD_LIST_BEGIN
  ADD_METHOD_TO(RestfulPastesCtrl::getOne, "/pastes?code={1}", Get, Options);
  ADD_METHOD_TO(RestfulPastesCtrl::updateOne, "/pastes?token={1}", Put,
                Options);
  ADD_METHOD_TO(RestfulPastesCtrl::deleteOne, "/pastes?token{1}", Delete,
                Options);
  ADD_METHOD_TO(RestfulPastesCtrl::create, "/pastes", Post, Options);
  // ADD_METHOD_TO(RestfulPastesCtrl::update,"/pastes",Put,Options);
  METHOD_LIST_END

  Task<HttpResponsePtr> getOne(HttpRequestPtr request, const std::string &code);
  Task<HttpResponsePtr> updateOne(HttpRequestPtr request,
                                  const std::string &token);
  Task<HttpResponsePtr> deleteOne(HttpRequestPtr request,
                                  const std::string &token);
  Task<HttpResponsePtr> create(HttpRequestPtr request);
};
