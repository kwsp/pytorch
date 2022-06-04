#include <torch/csrc/THConcat.h>

#define THWTensor                    TH_CONCAT_3(TH,Real,Tensor)
#define THWTensor_(NAME)             TH_CONCAT_4(TH,Real,Tensor_,NAME)

#define THPTensor                   TH_CONCAT_3(THP,Real,Tensor)
#define THPTensorStr                TH_CONCAT_STRING_3(torch.,Real,Tensor)
#define THPTensorClass              TH_CONCAT_3(THP,Real,TensorClass)
#define THPTensor_(NAME)            TH_CONCAT_4(THP,Real,Tensor_,NAME)

#define THWTensorPtr  TH_CONCAT_3(TH,Real,TensorPtr)
#define THPTensorPtr  TH_CONCAT_3(THP,Real,TensorPtr)
