#include "Server.h"
#include "FileCacheManager.h"
#include "MyClientHandler.h"
#include "MySerialServer.h"
#include "SearcherSolver.h"

int main(int argc, char *argv[]) {
    Server *server = new MySerialServer();
//    StringReverser *stringReverser = new StringReverser();
    FileCacheManager *fileCacheManager = new FileCacheManager();
    MyClientHandler *myClientHandler = new MyClientHandler(new SearcherSolver(), fileCacheManager);
//        myClientHandler->handlerClient(5600);
    server->open(atoi(argv[1]), myClientHandler);
//        this_thread::sleep_for(chrono::microseconds(100000));
    return 0;

}