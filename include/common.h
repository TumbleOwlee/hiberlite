#ifndef COMMON_H_
#define COMMON_H_

#include <list>
#include <map>
#include <set>
#include <string>
#include <vector>

#include <algorithm>
#include <iostream>
#include <stdexcept>

#include <sqlite3.h>

namespace hiberlite {

class noncopyable {
protected:
    noncopyable() {}
    ~noncopyable() {}

private:
    noncopyable(const noncopyable &);
    const noncopyable operator=(const noncopyable &);
};

typedef sqlite_int64 sqlid_t;

} // namespace hiberlite

#define HIBERLITE_HL_DBG_DO(x) ;

#endif
