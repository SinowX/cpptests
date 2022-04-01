#include <httpserver.hpp>
#include <iostream>
using namespace httpserver;

const std::shared_ptr<http_response> not_found_custom(const http_request&req){
	return std::shared_ptr<string_response>(new string_response("Not Found Custom\n",404,"text/plain"));
}

const std::shared_ptr<http_response> not_allowed_custom(const http_request&req){
	return std::shared_ptr<string_response>(new string_response("Not Allowed Custom\n",405,"text/plain"));
}

class hello_world_resource : public http_resource {
public:
    const std::shared_ptr<http_response> render_POST(const http_request&req) {
			std::cout<<req.get_method()<<std::endl;
			for(auto it : req.get_headers())
				std::cout<<it.first<<" "<<it.second<<std::endl;

			std::cout<<req.get_content()<<std::endl;

        return std::shared_ptr<http_response>(new string_response("Hello, World!\n",200,"text/json"));
    }
};

int main(int argc, char** argv) {
    webserver ws = create_webserver(8080)
			.max_connections(100)
			.connection_timeout(180)
			.not_found_resource(not_found_custom)
			.method_not_allowed_resource(not_allowed_custom)
			.start_method(http::http_utils::THREAD_PER_CONNECTION);

    hello_world_resource hwr;
		/* hwr.disallow_all(); */
		/* hwr.set_allowing("POST", true); */
    ws.register_resource("/hello", &hwr);
    ws.start(true);
    
    return 0;
}

