#include <hw04.h>

#include <cstring>

size_t hw04(const int* input_array, size_t elem_count) {
    int* out_data = new int[1];
    size_t out_size = 1;
    size_t out_index = 0;
    int sum = 0;

    for (size_t i = 0; i < elem_count; i++) {
        if (input_array[i] < 0) {
            break;
        }
        if (input_array[i] > 0) {
            int* new_out_data = new int[out_size+1];
            memcpy(new_out_data, out_data, out_size * sizeof(int));
            delete[] out_data;
            out_data = new_out_data;
            out_size++;
            out_data[out_index] = input_array[i];
            out_index++;
            sum += input_array[i];
        }
    }

    delete[] out_data;
    return sum;
}
