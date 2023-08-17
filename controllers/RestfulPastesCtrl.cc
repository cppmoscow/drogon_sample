/**
 *
 *  RestfulPastesCtrl.cc
 *  This file is generated by drogon_ctl
 *
 */

#include "RestfulPastesCtrl.h"
#include <drogon/utils/FunctionTraits.h>
#include <drogon/utils/coroutine.h>
#include <string>

Task<HttpResponsePtr> RestfulPastesCtrl::getOne(HttpRequestPtr request,
                                                const std::string &code) {
  co_return co_await RestfulPastesCtrlBase::getOne(request, code);
}

Task<HttpResponsePtr> RestfulPastesCtrl::updateOne(HttpRequestPtr request,
                                                   const std::string &token) {
  co_return co_await RestfulPastesCtrlBase::updateOne(request, token);
}

Task<HttpResponsePtr> RestfulPastesCtrl::deleteOne(HttpRequestPtr request,
                                                   const std::string &token) {
  co_return co_await RestfulPastesCtrlBase::deleteOne(request, token);
}

Task<HttpResponsePtr> RestfulPastesCtrl::create(HttpRequestPtr request) {
  co_return co_await RestfulPastesCtrlBase::create(request);
}
