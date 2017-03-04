#ifndef PHP_PANDA_REDIS_H
#define PHP_PANDA_REDIS_H

#define PANDA_EXPENDS_EXT_REDIS "redis"


#define PANDA_EXPENDS_EXT_REDIS_DEFAULT_HOST "127.0.0.1"
#define PANDA_EXPENDS_EXT_REDIS_DEFAULT_PROT  6379
#define PANDA_EXPENDS_EXT_REDIS_DEFAULT_DB  "0"

#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS "redis"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_CONNECT "connect"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_OPEN "open"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_PCONNECT "pconnect"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_POPEN "popen"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SELECT "select"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_CLOSE "close"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_GET "get"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SET "set"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SETEX "setex"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_PSETEX "psetex"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SETNX "setnx"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_DELETE "delete"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_DEL "del"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_EXISTS "exists"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_INCR "incr"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_INCRBY "incrby"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_INCRBYFLOAT "incrbyfloat"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_DECR "decr"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_DECRBY "decrby"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_MGET "mget"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_GETMULTIPLE "getmultiple"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_GETSET "getset"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_MOVE "move"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_EXPIREAT "expireat"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_PEXPIREAT "pexpireat"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_KEYS "keys"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_GETKEYS "getkeys"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_APPEND "append"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_GETRANGE "getrange"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SETRANGE "setrange"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_STRLEN "strlen"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_TTL "ttl"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_PTTL "pttl"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_RENAME "rename"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_RENAMEKEY "renamekey"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_RENAMENX "renamenx"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SORT "sort"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_PERSIST "persist"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_MSET "mset"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_MSETNX "msetnx"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_HDEL "hdel"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_HEXISTS "hexists"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_HGET "hget"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_HGETALL "hgetall"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_HINCRBY "hincrby"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_HINCRBYFLOAT "hincrbyfloat"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_HKEYS "hkeys"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_HLEN "hlen"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_HMSET "hmset"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_HMGET "hmget"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_HSET "hset"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_HSETNX "hsetnx"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_HVALS "hvals"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_BLPOP "blpop"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_BRPOP "brpop"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_BRPOPLPUSH "brpoplpush"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_LINDEX "lindex"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_LGET "lget"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_LPOP "lpop"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_LPUSH "lpush"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_LPUSHX "lpushx"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_LRANGE "lrange"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_LGETRANGE "lgetrange"
#define PADNA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_LSET "lset"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_LTRIM "ltrim"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_LISTTRIM "listtrim"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_RPOP "rpop"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_RPOPLPUSH "rpoplpush"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_RPUSH "rpush"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_RPUSHX "rpushx"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_LLEN "llen"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_LSIZE "lsize"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SADD "sadd"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SCARD "scard"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SSIZE "ssize"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SDIFF "sdiff"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SDIFFSTORE "sdiffstore"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SINTER "sinter"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SINTERSTORE "sinterstore"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SISMEMBER "sismember"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SCONTAINS "scontains"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SMEMBERS "smembers"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SGETMEMBERS "sgetmembers"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SMOVE "smove"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SPOP "spop"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SRANDMEMBER "srandmember"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SREM "srem"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SREMOVE "sremove"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SUNION "sunion"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SUNIONSTORE "sunionstore"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZADD "zadd"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZCARD "zcard"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZSIZE "zsize"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZCOUNT "zcount"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZINCRBY "zincrby"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZRANGE "zrange"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZRANGEBYSCORE "zrangebyscore"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZREVRANGEBYSCORE "zrevrangebyscore"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZRANGEBYLEX "zrangebylex"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZRANK "zrank"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZREVRANK "zrevrank"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZREM "zrem"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZDELETE "zdelete"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZREMRANGEBYRANK "zremrangebyrank"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZDELETERANGEBYRANK "zdeleterangebyrank"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZREMRANGEBYSCORE "zremrangebyscore"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZDELETERANGEBYSCORE "zdeleterangebyscore"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZREVRANGE "zrevrange"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZSCORE "zscore"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_ZUNION "zunion"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_PSUBSCRIBE "psubscribe"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_PUBLISH "publish"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SUBSCRIBE "subscribe"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_PUBSUB "pubsub"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_EVAL "eval"
#define PANDA_EXPENDS_EXT_REDIS_CLS_REDIS_METHOD_SCRIPT "script"



PANDA_METHOD(redis, connect);
PANDA_METHOD(redis, open);
PANDA_METHOD(redis, pconnect);
PANDA_METHOD(redis, popen);
PANDA_METHOD(redis, select);
PANDA_METHOD(redis, close);
PANDA_METHOD(redis, get);
PANDA_METHOD(redis, set);
PANDA_METHOD(redis, setex);
PANDA_METHOD(redis, psetex);
PANDA_METHOD(redis, setnx);
PANDA_METHOD(redis, psetnx);
PANDA_METHOD(redis, delete);
PANDA_METHOD(redis, del);
PANDA_METHOD(redis, exists);
PANDA_METHOD(redis, incr);
PANDA_METHOD(redis, incrby);
PANDA_METHOD(redis, incrbyfloat);
PANDA_METHOD(redis, decr);
PANDA_METHOD(redis, decrby);
PANDA_METHOD(redis, mget);
PANDA_METHOD(redis, getmultiple);
PANDA_METHOD(redis, getset);
PANDA_METHOD(redis, move);
PANDA_METHOD(redis, expireat);
PANDA_METHOD(redis, pexpireat);
PANDA_METHOD(redis, keys);
PANDA_METHOD(redis, getkeys);
PANDA_METHOD(redis, append);
PANDA_METHOD(redis, getrange);
PANDA_METHOD(redis, setrange);
PANDA_METHOD(redis, strlen);
PANDA_METHOD(redis, ttl);
PANDA_METHOD(redis, pttl);
PANDA_METHOD(redis, rename);
PANDA_METHOD(redis, renamekey);
PANDA_METHOD(redis, renamenx);
PANDA_METHOD(redis, sort);
PANDA_METHOD(redis, persist);
PANDA_METHOD(redis, mset);
PANDA_METHOD(redis, msetnx);
PANDA_METHOD(redis, hdel);
PANDA_METHOD(redis, hexists);
PANDA_METHOD(redis, hget);
PANDA_METHOD(redis, hgetall);
PANDA_METHOD(redis, hincrby);
PANDA_METHOD(redis, hincrbyfloat);
PANDA_METHOD(redis, hkeys);
PANDA_METHOD(redis, hlen);
PANDA_METHOD(redis, hmset);
PANDA_METHOD(redis, hmget);
PANDA_METHOD(redis, hset);
PANDA_METHOD(redis, hsetnx);
PANDA_METHOD(redis, hvals);
PANDA_METHOD(redis, blpop);
PANDA_METHOD(redis, brpop);
PANDA_METHOD(redis, brpoplpush);
PANDA_METHOD(redis, lindex);
PANDA_METHOD(redis, lget);
PANDA_METHOD(redis, lpop);
PANDA_METHOD(redis, lpush);
PANDA_METHOD(redis, lpushx);
PANDA_METHOD(redis, lrange);
PANDA_METHOD(redis, lgetrange);
PANDA_METHOD(redis, lset);
PANDA_METHOD(redis, ltrim);
PANDA_METHOD(redis, listtrim);
PANDA_METHOD(redis, rpop);
PANDA_METHOD(redis, rpoplpush);
PANDA_METHOD(redis, rpush);
PANDA_METHOD(redis, rpushx);
PANDA_METHOD(redis, llen);
PANDA_METHOD(redis, lsize);
PANDA_METHOD(redis, sadd);
PANDA_METHOD(redis, scard);
PANDA_METHOD(redis, ssize);
PANDA_METHOD(redis, sdiff);
PANDA_METHOD(redis, sdiffstore);
PANDA_METHOD(redis, sinter);
PANDA_METHOD(redis, sinterstore);
PANDA_METHOD(redis, sismember);
PANDA_METHOD(redis, scontains);
PANDA_METHOD(redis, smembers);
PANDA_METHOD(redis, sgetmembers);
PANDA_METHOD(redis, smove);
PANDA_METHOD(redis, spop);
PANDA_METHOD(redis, srandmember);
PANDA_METHOD(redis, srem);
PANDA_METHOD(redis, sremove);
PANDA_METHOD(redis, sunion);
PANDA_METHOD(redis, sunionstore);
PANDA_METHOD(redis, zadd);
PANDA_METHOD(redis, zcard);
PANDA_METHOD(redis, zsize);
PANDA_METHOD(redis, zcount);
PANDA_METHOD(redis, zincrby);
PANDA_METHOD(redis, zrange);
PANDA_METHOD(redis, zrangebyscore);
PANDA_METHOD(redis, zrevrangebyscore);
PANDA_METHOD(redis, zrangebylex);
PANDA_METHOD(redis, zrank);
PANDA_METHOD(redis, zrevrank);
PANDA_METHOD(redis, zrem);
PANDA_METHOD(redis, zdelete);
PANDA_METHOD(redis, zremrangebyrank);
PANDA_METHOD(redis, zdeleterangebyrank);
PANDA_METHOD(redis, zremrangebyscore);
PANDA_METHOD(redis, zdeleterangebyscore);
PANDA_METHOD(redis, zrevrange);
PANDA_METHOD(redis, zscore);
PANDA_METHOD(redis, zunion);
PANDA_METHOD(redis, psubscribe);
PANDA_METHOD(redis, publish);
PANDA_METHOD(redis, subscribe);
PANDA_METHOD(redis, pubsub);
PANDA_METHOD(redis, eval);
PANDA_METHOD(redis, script);
#endif