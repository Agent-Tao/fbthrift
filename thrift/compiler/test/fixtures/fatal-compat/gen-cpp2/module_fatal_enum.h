/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "module_fatal.h"

#include <fatal/type/enum.h>

#include <type_traits>

namespace test_cpp1 { namespace cpp_reflection {

namespace thrift_fatal_impl_detail {

class enum1_enum_traits {
  struct enum1__struct_unique_strings_list {
    using field0 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field0;
    using field1 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field1;
    using field2 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field2;
  };

  public:
  using type = ::test_cpp1::cpp_reflection::enum1;
  using name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::enum1;
  using str = enum1__struct_unique_strings_list;
  using name_to_value = ::fatal::type_map<
    ::fatal::type_pair<
      str::field0,
      std::integral_constant<type, type::field0>
    >,
    ::fatal::type_pair<
      str::field1,
      std::integral_constant<type, type::field1>
    >,
    ::fatal::type_pair<
      str::field2,
      std::integral_constant<type, type::field2>
    >
  >;

  class annotations {
    struct annotations__unique_annotations_keys {};

    struct annotations__unique_annotations_values {};

    public:
    using keys = annotations__unique_annotations_keys;
    using values = annotations__unique_annotations_values;
    using map = ::fatal::type_map<
    >;
  };

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::field0: return "field0";
      case type::field1: return "field1";
      case type::field2: return "field2";
      default: return fallback;
    }
  }
};

} // thrift_fatal_impl_detail

FATAL_REGISTER_ENUM_TRAITS(
  ::test_cpp1::cpp_reflection::thrift_fatal_impl_detail::enum1_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::test_cpp1::cpp_reflection::thrift_fatal_impl_detail::enum1_enum_traits::annotations,
    static_cast<::apache::thrift::legacy_type_id_t>(4992076682252594856ull)
  >
);
namespace thrift_fatal_impl_detail {

class enum2_enum_traits {
  struct enum2__struct_unique_strings_list {
    using field0_2 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field0_2;
    using field1_2 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field1_2;
    using field2_2 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field2_2;
  };

  public:
  using type = ::test_cpp1::cpp_reflection::enum2;
  using name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::enum2;
  using str = enum2__struct_unique_strings_list;
  using name_to_value = ::fatal::type_map<
    ::fatal::type_pair<
      str::field0_2,
      std::integral_constant<type, type::field0_2>
    >,
    ::fatal::type_pair<
      str::field1_2,
      std::integral_constant<type, type::field1_2>
    >,
    ::fatal::type_pair<
      str::field2_2,
      std::integral_constant<type, type::field2_2>
    >
  >;

  class annotations {
    struct annotations__unique_annotations_keys {};

    struct annotations__unique_annotations_values {};

    public:
    using keys = annotations__unique_annotations_keys;
    using values = annotations__unique_annotations_values;
    using map = ::fatal::type_map<
    >;
  };

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::field0_2: return "field0_2";
      case type::field1_2: return "field1_2";
      case type::field2_2: return "field2_2";
      default: return fallback;
    }
  }
};

} // thrift_fatal_impl_detail

FATAL_REGISTER_ENUM_TRAITS(
  ::test_cpp1::cpp_reflection::thrift_fatal_impl_detail::enum2_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::test_cpp1::cpp_reflection::thrift_fatal_impl_detail::enum2_enum_traits::annotations,
    static_cast<::apache::thrift::legacy_type_id_t>(6888467747342894920ull)
  >
);
namespace thrift_fatal_impl_detail {

class enum3_enum_traits {
  struct enum3__struct_unique_strings_list {
    using field0_3 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field0_3;
    using field1_3 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field1_3;
    using field2_3 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::field2_3;
  };

  public:
  using type = ::test_cpp1::cpp_reflection::enum3;
  using name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::enum3;
  using str = enum3__struct_unique_strings_list;
  using name_to_value = ::fatal::type_map<
    ::fatal::type_pair<
      str::field0_3,
      std::integral_constant<type, type::field0_3>
    >,
    ::fatal::type_pair<
      str::field1_3,
      std::integral_constant<type, type::field1_3>
    >,
    ::fatal::type_pair<
      str::field2_3,
      std::integral_constant<type, type::field2_3>
    >
  >;

  class annotations {
    struct annotations__unique_annotations_keys {
      using _now_with_an_underscore = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::_now_with_an_underscore;
      using another_there = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::another_there;
      using duplicate_id_annotation_1 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::duplicate_id_annotation_1;
      using duplicate_id_annotation_2 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::duplicate_id_annotation_2;
      using one_here = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::one_here;
      using yet_another = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::yet_another;
    };

    struct annotations__unique_annotations_values {
      using _now_with_an_underscore = ::fatal::constant_sequence<char, '_', 'n', 'o', 'w', '.', 'w', 'i', 't', 'h', '.', 'a', 'n', '.', 'u', 'n', 'd', 'e', 'r', 's', 'c', 'o', 'r', 'e'>;
      using another_there = ::fatal::constant_sequence<char, '.'>;
      using duplicate_id_annotation_1 = ::fatal::constant_sequence<char, 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'e', ' ', 'i', 'd', ' ', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n'>;
      using duplicate_id_annotation_2 = ::fatal::constant_sequence<char, 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'e', '.', 'i', 'd', '.', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n'>;
      using one_here = ::fatal::constant_sequence<char, 'w', 'i', 't', 'h', ' ', 's', 'o', 'm', 'e', ' ', 'v', 'a', 'l', 'u', 'e', ' ', 'a', 's', 's', 'o', 'c', 'i', 'a', 't', 'e', 'd'>;
      using yet_another = ::fatal::constant_sequence<char, 'a', 'n', 'd', ' ', 'y', 'e', 't', ' ', 'm', 'o', 'r', 'e', ' ', 't', 'e', 'x', 't', ' ', '-', ' ', 'i', 't', '\'', 's', ' ', 't', 'h', 'a', 't', ' ', 'e', 'a', 's', 'y'>;
    };

    public:
    using keys = annotations__unique_annotations_keys;
    using values = annotations__unique_annotations_values;
    using map = ::fatal::type_map<
      ::fatal::type_pair<
        keys::_now_with_an_underscore,
        values::_now_with_an_underscore
      >,
      ::fatal::type_pair<
        keys::another_there,
        values::another_there
      >,
      ::fatal::type_pair<
        keys::duplicate_id_annotation_1,
        values::duplicate_id_annotation_1
      >,
      ::fatal::type_pair<
        keys::duplicate_id_annotation_2,
        values::duplicate_id_annotation_2
      >,
      ::fatal::type_pair<
        keys::one_here,
        values::one_here
      >,
      ::fatal::type_pair<
        keys::yet_another,
        values::yet_another
      >
    >;
  };

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::field0_3: return "field0_3";
      case type::field1_3: return "field1_3";
      case type::field2_3: return "field2_3";
      default: return fallback;
    }
  }
};

} // thrift_fatal_impl_detail

FATAL_REGISTER_ENUM_TRAITS(
  ::test_cpp1::cpp_reflection::thrift_fatal_impl_detail::enum3_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::test_cpp1::cpp_reflection::thrift_fatal_impl_detail::enum3_enum_traits::annotations,
    static_cast<::apache::thrift::legacy_type_id_t>(4626344424889780008ull)
  >
);

}} // test_cpp1::cpp_reflection