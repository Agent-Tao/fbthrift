/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <src/gen-py3/py3/module_services_wrapper.h>
#include <src/gen-py3/py3/module_services_api.h>
#include <thrift/lib/cpp2/async/AsyncProcessor.h>

namespace py3 {
namespace simple {

SimpleServiceWrapper::SimpleServiceWrapper(PyObject *obj)
  : if_object(obj)
  {
    import_py3__module_services();
    Py_XINCREF(this->if_object);
  }

SimpleServiceWrapper::~SimpleServiceWrapper() {
    Py_XDECREF(this->if_object);
}

folly::Future<int32_t> SimpleServiceWrapper::future_get_five() {
  folly::Promise<int32_t> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_get_five(
    this->if_object,
    std::move(promise)
  );
  return future;
}

folly::Future<int32_t> SimpleServiceWrapper::future_add_five(
  int32_t num
) {
  folly::Promise<int32_t> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_add_five(
    this->if_object,
    std::move(promise),
    num
  );
  return future;
}

folly::Future<folly::Unit> SimpleServiceWrapper::future_do_nothing() {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_do_nothing(
    this->if_object,
    std::move(promise)
  );
  return future;
}

folly::Future<std::unique_ptr<std::string>> SimpleServiceWrapper::future_concat(
  std::unique_ptr<std::string> first,
  std::unique_ptr<std::string> second
) {
  folly::Promise<std::unique_ptr<std::string>> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_concat(
    this->if_object,
    std::move(promise),
    std::move(first),
    std::move(second)
  );
  return future;
}

folly::Future<int32_t> SimpleServiceWrapper::future_get_value(
  std::unique_ptr<py3::simple::SimpleStruct> simple_struct
) {
  folly::Promise<int32_t> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_get_value(
    this->if_object,
    std::move(promise),
    std::move(simple_struct)
  );
  return future;
}

folly::Future<bool> SimpleServiceWrapper::future_negate(
  bool input
) {
  folly::Promise<bool> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_negate(
    this->if_object,
    std::move(promise),
    input
  );
  return future;
}

folly::Future<int8_t> SimpleServiceWrapper::future_tiny(
  int8_t input
) {
  folly::Promise<int8_t> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_tiny(
    this->if_object,
    std::move(promise),
    input
  );
  return future;
}

folly::Future<int16_t> SimpleServiceWrapper::future_small(
  int16_t input
) {
  folly::Promise<int16_t> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_small(
    this->if_object,
    std::move(promise),
    input
  );
  return future;
}

folly::Future<int64_t> SimpleServiceWrapper::future_big(
  int64_t input
) {
  folly::Promise<int64_t> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_big(
    this->if_object,
    std::move(promise),
    input
  );
  return future;
}

folly::Future<double> SimpleServiceWrapper::future_two(
  double input
) {
  folly::Promise<double> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_two(
    this->if_object,
    std::move(promise),
    input
  );
  return future;
}

folly::Future<folly::Unit> SimpleServiceWrapper::future_expected_exception() {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_expected_exception(
    this->if_object,
    std::move(promise)
  );
  return future;
}

folly::Future<int32_t> SimpleServiceWrapper::future_unexpected_exception() {
  folly::Promise<int32_t> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_unexpected_exception(
    this->if_object,
    std::move(promise)
  );
  return future;
}

folly::Future<int32_t> SimpleServiceWrapper::future_sum_i16_list(
  std::unique_ptr<std::vector<int16_t>> numbers
) {
  folly::Promise<int32_t> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_sum_i16_list(
    this->if_object,
    std::move(promise),
    std::move(numbers)
  );
  return future;
}

folly::Future<int32_t> SimpleServiceWrapper::future_sum_i32_list(
  std::unique_ptr<std::vector<int32_t>> numbers
) {
  folly::Promise<int32_t> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_sum_i32_list(
    this->if_object,
    std::move(promise),
    std::move(numbers)
  );
  return future;
}

folly::Future<int32_t> SimpleServiceWrapper::future_sum_i64_list(
  std::unique_ptr<std::vector<int64_t>> numbers
) {
  folly::Promise<int32_t> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_sum_i64_list(
    this->if_object,
    std::move(promise),
    std::move(numbers)
  );
  return future;
}

folly::Future<std::unique_ptr<std::string>> SimpleServiceWrapper::future_concat_many(
  std::unique_ptr<std::vector<std::string>> words
) {
  folly::Promise<std::unique_ptr<std::string>> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_concat_many(
    this->if_object,
    std::move(promise),
    std::move(words)
  );
  return future;
}

folly::Future<int32_t> SimpleServiceWrapper::future_count_structs(
  std::unique_ptr<std::vector<py3::simple::SimpleStruct>> items
) {
  folly::Promise<int32_t> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_count_structs(
    this->if_object,
    std::move(promise),
    std::move(items)
  );
  return future;
}

folly::Future<int32_t> SimpleServiceWrapper::future_sum_set(
  std::unique_ptr<std::set<int32_t>> numbers
) {
  folly::Promise<int32_t> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_sum_set(
    this->if_object,
    std::move(promise),
    std::move(numbers)
  );
  return future;
}

folly::Future<bool> SimpleServiceWrapper::future_contains_word(
  std::unique_ptr<std::set<std::string>> words,
  std::unique_ptr<std::string> word
) {
  folly::Promise<bool> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_contains_word(
    this->if_object,
    std::move(promise),
    std::move(words),
    std::move(word)
  );
  return future;
}

folly::Future<std::unique_ptr<std::string>> SimpleServiceWrapper::future_get_map_value(
  std::unique_ptr<std::map<std::string,std::string>> words,
  std::unique_ptr<std::string> key
) {
  folly::Promise<std::unique_ptr<std::string>> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_get_map_value(
    this->if_object,
    std::move(promise),
    std::move(words),
    std::move(key)
  );
  return future;
}

folly::Future<int16_t> SimpleServiceWrapper::future_map_length(
  std::unique_ptr<std::map<std::string,py3::simple::SimpleStruct>> items
) {
  folly::Promise<int16_t> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_map_length(
    this->if_object,
    std::move(promise),
    std::move(items)
  );
  return future;
}

folly::Future<int16_t> SimpleServiceWrapper::future_sum_map_values(
  std::unique_ptr<std::map<std::string,int16_t>> items
) {
  folly::Promise<int16_t> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_sum_map_values(
    this->if_object,
    std::move(promise),
    std::move(items)
  );
  return future;
}

folly::Future<int32_t> SimpleServiceWrapper::future_complex_sum_i32(
  std::unique_ptr<py3::simple::ComplexStruct> counter
) {
  folly::Promise<int32_t> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_complex_sum_i32(
    this->if_object,
    std::move(promise),
    std::move(counter)
  );
  return future;
}

folly::Future<std::unique_ptr<std::string>> SimpleServiceWrapper::future_repeat_name(
  std::unique_ptr<py3::simple::ComplexStruct> counter
) {
  folly::Promise<std::unique_ptr<std::string>> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_repeat_name(
    this->if_object,
    std::move(promise),
    std::move(counter)
  );
  return future;
}

folly::Future<std::unique_ptr<py3::simple::SimpleStruct>> SimpleServiceWrapper::future_get_struct() {
  folly::Promise<std::unique_ptr<py3::simple::SimpleStruct>> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_get_struct(
    this->if_object,
    std::move(promise)
  );
  return future;
}

folly::Future<std::unique_ptr<std::vector<int32_t>>> SimpleServiceWrapper::future_fib(
  int16_t n
) {
  folly::Promise<std::unique_ptr<std::vector<int32_t>>> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_fib(
    this->if_object,
    std::move(promise),
    n
  );
  return future;
}

folly::Future<std::unique_ptr<std::set<std::string>>> SimpleServiceWrapper::future_unique_words(
  std::unique_ptr<std::vector<std::string>> words
) {
  folly::Promise<std::unique_ptr<std::set<std::string>>> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_unique_words(
    this->if_object,
    std::move(promise),
    std::move(words)
  );
  return future;
}

folly::Future<std::unique_ptr<std::map<std::string,int16_t>>> SimpleServiceWrapper::future_words_count(
  std::unique_ptr<std::vector<std::string>> words
) {
  folly::Promise<std::unique_ptr<std::map<std::string,int16_t>>> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_words_count(
    this->if_object,
    std::move(promise),
    std::move(words)
  );
  return future;
}

folly::Future<py3::simple::AnEnum> SimpleServiceWrapper::future_set_enum(
  py3::simple::AnEnum in_enum
) {
  folly::Promise<py3::simple::AnEnum> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_set_enum(
    this->if_object,
    std::move(promise),
    in_enum
  );
  return future;
}

folly::Future<std::unique_ptr<std::vector<std::vector<int32_t>>>> SimpleServiceWrapper::future_list_of_lists(
  int16_t num_lists,
  int16_t num_items
) {
  folly::Promise<std::unique_ptr<std::vector<std::vector<int32_t>>>> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_list_of_lists(
    this->if_object,
    std::move(promise),
    num_lists,
    num_items
  );
  return future;
}

folly::Future<std::unique_ptr<std::map<std::string,std::map<std::string,int32_t>>>> SimpleServiceWrapper::future_word_character_frequency(
  std::unique_ptr<std::string> sentence
) {
  folly::Promise<std::unique_ptr<std::map<std::string,std::map<std::string,int32_t>>>> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_word_character_frequency(
    this->if_object,
    std::move(promise),
    std::move(sentence)
  );
  return future;
}

folly::Future<std::unique_ptr<std::vector<std::set<std::string>>>> SimpleServiceWrapper::future_list_of_sets(
  std::unique_ptr<std::string> some_words
) {
  folly::Promise<std::unique_ptr<std::vector<std::set<std::string>>>> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_list_of_sets(
    this->if_object,
    std::move(promise),
    std::move(some_words)
  );
  return future;
}

folly::Future<int32_t> SimpleServiceWrapper::future_nested_map_argument(
  std::unique_ptr<std::map<std::string,std::vector<py3::simple::SimpleStruct>>> struct_map
) {
  folly::Promise<int32_t> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_nested_map_argument(
    this->if_object,
    std::move(promise),
    std::move(struct_map)
  );
  return future;
}

folly::Future<std::unique_ptr<std::string>> SimpleServiceWrapper::future_make_sentence(
  std::unique_ptr<std::vector<std::vector<std::string>>> word_chars
) {
  folly::Promise<std::unique_ptr<std::string>> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_make_sentence(
    this->if_object,
    std::move(promise),
    std::move(word_chars)
  );
  return future;
}

folly::Future<std::unique_ptr<std::set<int32_t>>> SimpleServiceWrapper::future_get_union(
  std::unique_ptr<std::vector<std::set<int32_t>>> sets
) {
  folly::Promise<std::unique_ptr<std::set<int32_t>>> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_get_union(
    this->if_object,
    std::move(promise),
    std::move(sets)
  );
  return future;
}

folly::Future<std::unique_ptr<std::set<std::string>>> SimpleServiceWrapper::future_get_keys(
  std::unique_ptr<std::vector<std::map<std::string,std::string>>> string_map
) {
  folly::Promise<std::unique_ptr<std::set<std::string>>> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_get_keys(
    this->if_object,
    std::move(promise),
    std::move(string_map)
  );
  return future;
}

folly::Future<double> SimpleServiceWrapper::future_lookup_double(
  int32_t key
) {
  folly::Promise<double> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_lookup_double(
    this->if_object,
    std::move(promise),
    key
  );
  return future;
}

folly::Future<std::unique_ptr<std::string>> SimpleServiceWrapper::future_retrieve_binary(
  std::unique_ptr<std::string> something
) {
  folly::Promise<std::unique_ptr<std::string>> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_retrieve_binary(
    this->if_object,
    std::move(promise),
    std::move(something)
  );
  return future;
}

folly::Future<std::unique_ptr<std::set<std::string>>> SimpleServiceWrapper::future_contain_binary(
  std::unique_ptr<std::vector<std::string>> binaries
) {
  folly::Promise<std::unique_ptr<std::set<std::string>>> promise;
  auto future = promise.getFuture();
  call_cy_SimpleService_contain_binary(
    this->if_object,
    std::move(promise),
    std::move(binaries)
  );
  return future;
}

std::shared_ptr<apache::thrift::ServerInterface> SimpleServiceInterface(PyObject *if_object) {
  return std::make_shared<SimpleServiceWrapper>(if_object);
}
} // namespace py3
} // namespace simple
