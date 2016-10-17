CC="clang"
LD="ld"

OUTDIR="target/#{ENV["TARGET"]}"

raise "Please set the TARGET environment variable (linux, freebsd, staging)" unless ENV["TARGET"]

files = Rake::FileList["core/*.c", "#{ENV["TARGET"]}/*.c"]

task default: files do |t|
	sh "#{CC} -Iinclude #{t.prerequisites.join(" ")} -o #{OUTDIR}/briochs"
end

task :clean do
	sh "rm -rf target"
end 
