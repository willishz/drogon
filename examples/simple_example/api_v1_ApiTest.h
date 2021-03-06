#pragma once
#include <drogon/HttpApiController.h>
using namespace drogon;
namespace api
{
    namespace v1
    {
        class ApiTest:public drogon::HttpApiController<ApiTest>
        {
        public:
            METHOD_LIST_BEGIN
                //use METHOD_ADD to add your custom processing function here;
                METHOD_ADD(ApiTest::get,"/{2}/{1}",1,"drogon::GetFilter");//path will be /api/v1/ApiTest/get/{arg2}/{arg1}
                METHOD_ADD(ApiTest::your_method_name,"/{1}/list?p2={2}",0,"drogon::GetFilter");//path will be /api/v1/ApiTest/{arg1}/list

            METHOD_LIST_END
            //your declaration of processing function maybe like this:
            void get(const HttpRequestPtr& req,const std::function<void (const HttpResponsePtr &)>&callback,int p1,std::string p2);
            void your_method_name(const HttpRequestPtr& req,const std::function<void (const HttpResponsePtr &)>&callback,double p1,int p2) const;
        };
    }
}
