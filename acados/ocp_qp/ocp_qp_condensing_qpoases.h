#ifndef ACADOS_OCP_QP_OCP_QP_CONDENSING_QPOASES_H_
#define ACADOS_OCP_QP_OCP_QP_CONDENSING_QPOASES_H_

#include "acados/utils/types.h"
#include "acados/ocp_qp/ocp_qp_common.h"

typedef struct ocp_qp_condensing_qpoases_args_ {
    real_t dummy;
} ocp_qp_condensing_qpoases_args;

int_t ocp_qp_condensing_qpoases(ocp_qp_in *input, ocp_qp_out *output,
    ocp_qp_condensing_qpoases_args *args, real_t *work);

int_t ocp_qp_condensing_qpoases_workspace_size(ocp_qp_in *input,
    ocp_qp_condensing_qpoases_args *args);

void initialise_qpoases(ocp_qp_in *input);

#endif  // ACADOS_OCP_QP_OCP_QP_CONDENSING_QPOASES_H_
