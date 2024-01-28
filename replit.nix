{ pkgs }: {
	deps = [
   pkgs.stack
		pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}