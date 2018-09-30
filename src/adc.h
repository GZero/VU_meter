#ifndef ADC_H
#define ADC_H

#include <stdint.h>

typedef struct adc_data_t_ {
  uint16_t l_needle;
  uint16_t l_peak;
  uint16_t r_needle;
  uint16_t r_peak;
} adc_data_t;


void adc_init(void);
void adc_get(adc_data_t *result);

#endif /* ADC_H */
