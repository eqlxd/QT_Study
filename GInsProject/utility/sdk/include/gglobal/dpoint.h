#ifndef DPOINT_H
#define DPOINT_H

#define G_DECLARE_DP(Class) \
    friend class Class##Private; \
    class Class##Private * dp;

#define G_DECLARE_DD(Class) Class * const dd;

#endif // DPOINT_H
