#pragma once

#include <drogon/HttpSimpleController.h>
using namespace drogon;

class JsonTestController:public drogon::HttpSimpleController<JsonTestController>
{
public:
    //TestController(){}
    virtual void asyncHandleHttpRequest(const HttpRequestPtr& req,const std::function<void (const HttpResponsePtr &)>&callback)override;

    PATH_LIST_BEGIN
    PATH_ADD("/json");
    PATH_LIST_END
};