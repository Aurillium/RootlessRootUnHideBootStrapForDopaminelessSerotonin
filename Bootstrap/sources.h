#ifndef sources_h
#define sources_h

#define DEFAULT_SOURCES "\
Types: deb\n\
URIs: https://repo.chariz.com/\n\
Suites: ./\n\
Components:\n\
\n\
Types: deb\n\
URIs: https://havoc.app/\n\
Suites: ./\n\
Components:\n\
\n\
Types: deb\n\
URIs: http://apt.thebigboss.org/repofiles/cydia/\n\
Suites: stable\n\
Components: main\n\
\n\
Types: deb\n\
URIs: https://roothide.github.io/\n\
Suites: ./\n\
Components:\n\
\n\
Types: deb\n\
URIs: https://roothide.github.io/procursus\n\
Suites: iphoneos-arm64e iphoneos-arm64/%d\n\
Components: main\n\
"

// For Procursus, it may not be wise to allow their console utils as they handle paths different to RootHide
#define ALT_SOURCES "\
Types: deb\n\
URIs: https://iosjb.top/\n\
Suites: ./\n\
Components:\n\
\n\
Types: deb\n\
URIs: https://iosjb.top/procursus\n\
Suites: iphoneos-arm64e/%d\n\
Components: main\n\
"

#define ZEBRA_SOURCES "\
# Zebra Sources List\n\
deb https://getzbra.com/repo/ ./\n\
deb https://repo.chariz.com/ ./\n\
deb https://havoc.app/ ./\n\
deb https://roothide.github.io/ ./\n\
deb https://roothide.github.io/procursus iphoneos-arm64e iphoneos-arm64/%d main\n\
\n\
"

#endif /* sources_h */
