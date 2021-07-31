//
// Created by hxy on 2021/7/31.
//

#ifndef UNTITLED1_GET_NUM_H
#define UNTITLED1_GET_NUM_H

#define GN_NONNEG 01
#define DN_DT_0 02


#define GN_ANY_BASE 0100
#define GN_BASE_8 0200
#define GN_BASE_16 0400

long getLong(const char *arg,int flags,const char *name);

int getInt(const char *arg,int flags,const char *name);

#endif //UNTITLED1_GET_NUM_H
