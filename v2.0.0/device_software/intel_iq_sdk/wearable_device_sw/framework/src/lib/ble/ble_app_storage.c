/*
 * Copyright (c) 2015, Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include "ble_app_storage.h"

#include <assert.h>
#include "services/properties_service/properties_service_api.h"
#include "util/misc.h"
#include "infra/log.h"

void handle_ble_property_read_rsp(struct cfw_message *msg)
{
	read_property_rsp_msg_t *rsp = container_of(msg, read_property_rsp_msg_t, rsp_header);
	struct ble_app_storage_handler *p_hdl = CFW_MESSAGE_PRIV(msg);
	int status = rsp->rsp_header.status;
	uint8_t *data;

	assert(p_hdl);

	if (DRV_RC_OK == status)
		data = &rsp->start_of_values;
	else
		data = NULL;
	p_hdl->cback(p_hdl, data);
	bfree(p_hdl);
}

int ble_properties_read(cfw_service_conn_t *p_service_properties_conn,
		struct ble_app_storage_handler *hdl, uint8_t ble_property_id)
{
	ble_status_t ble_status = BLE_STATUS_ERROR;
	if (p_service_properties_conn) {
		properties_service_read(p_service_properties_conn,
				BLE_SERVICE_ID, ble_property_id, hdl);
		ble_status = BLE_STATUS_SUCCESS;
	}
	return ble_status;
}

int ble_properties_write(void *ble_property, uint8_t ble_property_size,
		    uint8_t property_id, cfw_service_conn_t *p_service_properties_conn)
{
	ble_status_t ble_status = BLE_STATUS_ERROR;

	assert(ble_property);

	if (p_service_properties_conn) {
		properties_service_write(p_service_properties_conn,
				BLE_SERVICE_ID, property_id, ble_property,
				ble_property_size, NULL);
		ble_status = BLE_STATUS_SUCCESS;
	}
	return ble_status;
}
