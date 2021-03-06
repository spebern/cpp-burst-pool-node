start:
	cd build; cmake ..; make -j9; mv compile_commands.json ..
run: start
	./build/src/server
clean:
	cd build; make clean;
docker:
	sudo docker build -t spebern/cpp-burst-pool-node .
	sudo docker-compose up -d
proto:
	protoc -I protos --grpc_out=. --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` protos/nodecom.proto
	protoc -I protos --cpp_out=. protos/nodecom.proto
deploy:
	ssh root@206.189.35.196 'su - burstnode -s /bin/bash -c "source ~/.profile && cd app && git pull && make"'



