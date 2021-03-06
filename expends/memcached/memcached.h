#ifndef PHP_PANDA_MEMCACHED_H
#define PHP_PANDA_MEMCACHED_H
#define PANDA_EXPENDS_EXT_MEMCACHED "memcached"

#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED "memcached"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_ADD "add"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_ADD_BY_KEY "addbykey"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_ADD_SERVER "addserver"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_ADD_SERVERS "addservers"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_APPEND "append"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_APPEND_BY_KEY "appendbykey"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_DECREMENT "decrement"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_DECREMENT_BY_KEY "decrementbykey"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_DELETE "delete"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_DELETE_BY_KEY "deletebykey"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_DELETE_MULTI "deletemulti"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_DELETE_MULTI_BY_KEY "deletemultibykey"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_GET "get"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_GET_BY_KEY "getbykey"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_GET_DELAYED "getdelayed"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_GET_MULTI "getmulti"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_GET_MULTI_BY_KEY "getmultibykey"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_INCREMENT "increment"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_INCREMENT_BY_KEY "incrementbykey"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_PREPEND "prepend"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_PREPEND_BY_KEY "prependbykey"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_REPLACE "replace"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_REPLACE_BY_KEY "replacebykey"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_SET "set"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_SET_BY_KEY "setbykey"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_SET_MULTI "setmulti"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_SET_MULTI_BY_KEY "setmultibykey"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_FETCH "fetch"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_FETCH_ALL "fetchall"
#define PANDA_EXPENDS_EXT_MEMCACHED_CLS_MEMCACHED_METHOD_QUIT "quit"

PANDA_METHOD(memcached, add);
PANDA_METHOD(memcached, addbykey);
PANDA_METHOD(memcached, addserver);
PANDA_METHOD(memcached, addservers);
PANDA_METHOD(memcached, append);
PANDA_METHOD(memcached, appendbykey);
PANDA_METHOD(memcached, decrement);
PANDA_METHOD(memcached, decrementbykey);
PANDA_METHOD(memcached, delete);
PANDA_METHOD(memcached, deletebykey);
PANDA_METHOD(memcached, deletemulti);
PANDA_METHOD(memcached, deletemultibykey);
PANDA_METHOD(memcached, get);
PANDA_METHOD(memcached, getbykey);
PANDA_METHOD(memcached, getdelayed);
PANDA_METHOD(memcached, getmulti);
PANDA_METHOD(memcached, getmultibykey);
PANDA_METHOD(memcached, increment);
PANDA_METHOD(memcached, incrementbykey);
PANDA_METHOD(memcached, prepend);
PANDA_METHOD(memcached, prependbykey);
PANDA_METHOD(memcached, replace);
PANDA_METHOD(memcached, replacebykey);
PANDA_METHOD(memcached, set);
PANDA_METHOD(memcached, setbykey);
PANDA_METHOD(memcached, setmulti);
PANDA_METHOD(memcached, setmultibykey);
PANDA_METHOD(memcached, fetch);
PANDA_METHOD(memcached, fetchall);
PANDA_METHOD(memcached, quit);
#endif


