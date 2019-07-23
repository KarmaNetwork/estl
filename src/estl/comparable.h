#ifndef ESTL_ESTL_COMPARABLE_H
#define ESTL_ESTL_COMPARABLE_H

namespace ESTL_NAMESPACE {

template <typename Impl>
struct comparable {
    // comparable == other
    template<typename Other>
    inline bool operator == (const Other &v) const {
        const Impl *p = static_cast<const Impl *>(this);
        return ( p->_cmp(v) == 0 ) ? true : false;
    }

    template<>
    inline bool operator == (const comparable<Impl> &v) const {
        const Impl *p = static_cast<const Impl *>(this);
        return ( p -> _cmp(v) == 0 ) ? true : false;
    }

    // comparable != other
    template <typename Other>
    inline bool operator != (const Other &v) const {
        const Impl *p = static_cast<const Impl *>(this);
        return ( p->_cmp(v) != 0 ) ? true : false;
    }
};

// specialization for comparable == comparable
/* template <typename Impl> */
// template <>
// inline bool comparable<Impl>::operator == (const comparable<I> &v) const {
//     return ( p->_cmp(v) == 0 ) ? true : false;
// }
/*  */
}

#endif

