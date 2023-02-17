#include <crow.h>
#include <crow/mustache.h>

int main(){
    crow::SimpleApp app;

    crow::mustache::set_global_base("../templates");
    CROW_ROUTE(app, "/")([](){
        auto page = crow::mustache::load("index.html");
        return page.render();
    });

    app.port(8080).multithreaded().run();

    return 0;
}