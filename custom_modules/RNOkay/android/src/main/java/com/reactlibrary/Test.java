package com.reactlibrary;

import com.fasterxml.jackson.annotation.JsonSetter;
import com.protectoria.psa.dex.common.ui.PageTheme;

public class Test extends PageTheme {
    @JsonSetter()
    @Override
    public void setActionBarBackgroundColor(int actionBarBackgroundColor) {
        super.setActionBarBackgroundColor(actionBarBackgroundColor);
    }
}
