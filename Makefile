build:
	cmake -DCMAKE_BUILD_TYPE=Release -B_build
	cd _build && make && cd -

ccls:
	cmake -H. -B_debug -DCMAKE_BUILD_TYPE=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS=YES
	ln -fs _debug/compile_commands.json .

clean:
	rm -rf _build
