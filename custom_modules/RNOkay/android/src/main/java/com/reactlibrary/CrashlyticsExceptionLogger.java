package com.reactlibrary;

import android.text.TextUtils;
import android.util.Log;

import com.protectoria.psa.dex.common.utils.logger.ExceptionLogger;

public class CrashlyticsExceptionLogger  implements ExceptionLogger {

  @Override
  public void exception(String message, Exception exception) {
    if (!TextUtils.isEmpty(message)) {
      Log.i("identificator", message);
    }

    Log.i("identificator", "error");
  }

  @Override
  public void setUserIdentificator(String identificator) {
    Log.i("identificator", identificator);
  }
}