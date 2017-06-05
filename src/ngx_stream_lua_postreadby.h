// add by chrono

/*
 * Copyright (C) Xiaozhe Wang (chaoslawful)
 * Copyright (C) Yichun Zhang (agentzh)
 */


#ifndef _NGX_STREAM_LUA_ACCESSBY_H_INCLUDED_
#define _NGX_STREAM_LUA_ACCESSBY_H_INCLUDED_


#include "ngx_stream_lua_common.h"

// we add our own post_read phase in struct ngx_stream_phases
#if NGX_STREAM_LOG_PHASE >=7
#define NGX_STREAM_HAS_POST_READ
#endif

#ifdef NGX_STREAM_HAS_POST_READ

ngx_int_t ngx_stream_lua_postread_handler(ngx_stream_session_t *s);
ngx_int_t ngx_stream_lua_postread_handler_inline(ngx_stream_session_t *s);
ngx_int_t ngx_stream_lua_postread_handler_file(ngx_stream_session_t *s);

#endif  //NGX_STREAM_HAS_POST_READ

#endif /* _NGX_STREAM_LUA_ACCESSBY_H_INCLUDED_ */

/* vi:set ft=c ts=4 sw=4 et fdm=marker: */
